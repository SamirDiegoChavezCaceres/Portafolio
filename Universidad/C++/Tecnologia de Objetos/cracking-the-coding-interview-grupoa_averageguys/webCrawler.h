//#IFNDEF WEBCRAWLER_H
//#DEFINE WEBCRAWLER_H
struct PageContent {
  int uniqueWords;
  char** links;
};
class Page {
  public:
    Page(const char* link, const PageContent& content);
    const char* url;
    const PageContent& content;
  private:
    char* link;
    PageContent* content;
};
class HashSet {
  public:
    HashSet();
    void add(const char* link, const PageContent** content);
    PageContent** get(const char* link);
    bool contains(const char* link);
  private:
    char* link;
    PageContent** contents;
};
class Crawler {
  public:
    Crawler();
    void crawl(const Page* page);
  private:
    HasHSet* visitedPages;
};
//#ENDIF