#include "webCrawler.h"
Crawler::Crawler() {
  currentPage = NULL;
}
Crawler:: crawl(const Page* page) {
  if(HashSet::contains(page->url)){
    if(page->content.uniqueWords == HashSet::get(page->url)) {
      return;
    } else {
      HashSet::add(page->url, page->content);
    }
  }
  HashSet::add(page->url, page->content);
  //for each link in page->content.links we crawl in them
  //we use hashSet to check if we have already visited the page
};
//Los loops infinitos ocurriran si una pagina tiene un link a si mismo
//por lo que es necesario saber si ya se ha visitado la pagina
//esto se comprueba por medio del url y el contenido de la pagina
