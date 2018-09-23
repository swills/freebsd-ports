# Created by: Mark Huizer; Eindhoven
# $FreeBSD: head/www/logtools/Makefile 480340 2018-09-22 05:30:31Z linimon $

PORTNAME=	logtools
PORTVERSION=	0.13e
CATEGORIES=	www
MASTER_SITES=	http://www.coker.com.au/logtools/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Useful tools to deal with CLF files (Common Log File format)

LICENSE=	GPLv2

USES=		compiler:c++11-lang tar:tgz
GNU_CONFIGURE=	yes

post-patch:
	@${REINPLACE_CMD} -e \
		's|-O2 -g|| ; \
		 s|-lstdc++|| ; \
		 s| \($${prefix}\)| $${DESTDIR}\1|g ; \
		 s| \(@mandir@\)| $${DESTDIR}\1|g ; \
		 s|.cfg |.cfg.sample | ; \
		 s| \(@sysconfdir@\)| $${DESTDIR}\1|g' ${WRKSRC}/Makefile.in

post-build:
	@${LN} -sf clfdomainsplit.cfg ${WRKSRC}/clfdomainsplit.cfg.sample

.include <bsd.port.mk>
