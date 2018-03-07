# Created by: Yasuhiro KIMURA <yasu@utahime.org>
# $FreeBSD: head/mail/py-authres/Makefile 463564 2018-03-04 12:47:18Z koobs $

PORTNAME=	authres
PORTVERSION=	1.1.0
CATEGORIES=	mail python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yasu@utahime.org
COMMENT=	Python module for RFC 5451 Authentication-Results headers

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYING

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist concurrent distutils

PLIST_SUB+=	PORTNAME=${PORTNAME}

PORTDOCS=	CHANGES README

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
