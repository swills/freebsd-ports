# $FreeBSD: head/net/graphpath/Makefile 468621 2018-04-29 11:51:06Z olivier $

PORTNAME=	graphpath
PORTVERSION=	1.0
DISTVERSIONPREFIX=	v
CATEGORIES=	net

MAINTAINER=	olivier@FreeBSD.org
COMMENT=	Generates an ASCII network diagram from the route table

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	ocochard

NO_BUILD=	yes

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
