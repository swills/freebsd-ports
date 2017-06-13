# Created by: gahr
# $FreeBSD: head/databases/retcl/Makefile 440685 2017-05-12 15:26:11Z gahr $

PORTNAME=	retcl
PORTVERSION=	0.2.2
CATEGORIES=	databases

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	Tcl client library for Redis

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		tcl:run
USE_GITHUB=	yes
GH_ACCOUNT=	gahr

NO_BUILD=	yes

LIBDIR=		${TCL_LIBDIR:S/${LOCALBASE}/${PREFIX}/}
PLIST_FILES=	${LIBDIR}/${PORTNAME}-${DISTVERSION}.tm

do-install:
	${MKDIR} ${STAGEDIR}${LIBDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.tm \
	    ${STAGEDIR}${LIBDIR}/${PORTNAME}-${DISTVERSION}.tm

.include <bsd.port.mk>
