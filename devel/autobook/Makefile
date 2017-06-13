# Created by: Edwin Groothuis (edwin@mavetju.org)
# $FreeBSD: head/devel/autobook/Makefile 426952 2016-11-23 18:37:19Z amdmi3 $

PORTNAME=	autobook
PORTVERSION=	1.5
CATEGORIES=	devel
MASTER_SITES=	http://sources.redhat.com/autobook/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNU autoconf, automake, and libtool - The Book

LICENSE=	OPL
LICENSE_NAME=	OPEN PUBLICATION LICENSE
LICENSE_FILE=	${WRKDIR}/LICENSE
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

NO_BUILD=	yes
NO_ARCH=	yes

post-extract:
	@${SED} -ne '/<pre>/,/<\/pre>/ { s|.*<pre>||; s|</pre>.*||; s|&#60;|<|g; s|&#62;|>|g; p; }' \
		< ${WRKSRC}/autobook_284.html > ${WRKDIR}/LICENSE

do-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/* ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
