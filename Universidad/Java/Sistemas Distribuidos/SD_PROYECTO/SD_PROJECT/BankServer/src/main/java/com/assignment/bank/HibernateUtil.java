
package com.assignment.bank;

import java.io.File;
import org.hibernate.HibernateException;
import org.hibernate.SessionFactory;
import org.hibernate.cfg.Configuration;

public class HibernateUtil {
	private static SessionFactory sessionFactory;
        //initialize sessionFactory object by calling method initHibernateUtil()

	private static SessionFactory initHibernateUtil(String bank) {
        //method responsible for configuring a sessionFactory oject based on the confg file
        
        /* MODIFY TO BE ABLE TO IDENTY THE CORRECT PATH IN LINUX / WINDOWS */
            File f;
            if(bank.equals("A")){
                f = new File("src/main/resources/hibernateA.cfg.xml");
            } else if(bank.equals("B")){
                f = new File("src/main/resources/hibernateB.cfg.xml");		
            } else {
                f = new File("src/main/resources/hibernateC.cfg.xml");
            }
            try {
                    return new Configuration().configure(f).buildSessionFactory();
            } catch (HibernateException ex) {
                    throw new ExceptionInInitializerError(ex);
            }
	}
        
	public static SessionFactory getSessionFactory(String bank) {
            sessionFactory = initHibernateUtil(bank);
            return sessionFactory;
	}
        
        
	public static void shutdown() {//method resposible for closing the session factory
		// Close caches and connection pools
		sessionFactory.close();
	}
        
}
