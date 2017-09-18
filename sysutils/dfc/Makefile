# $FreeBSD: head/sysutils/dfc/Makefile 450028 2017-09-17 21:33:54Z dbaio $

PORTNAME=	dfc
DISTVERSION=	3.1.1
CATEGORIES=	sysutils
MASTER_SITES=	https://projects.gw-computing.net/attachments/download/615/

MAINTAINER=	mcy@lm7.fr
COMMENT=	Display file system space usage using graph and colors

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake
CMAKE_ARGS+=	-DMAN_PATH=${MANPREFIX}/man -DDFC_DOC_PATH=${DOCSDIR}

OPTIONS_DEFINE=	NLS DOCS
OPTIONS_SUB=	yes

NLS_USES=	gettext
NLS_CMAKE_ON=	-DNLS_ENABLED=true
NLS_CMAKE_OFF=	-DNLS_ENABLED=false

.include <bsd.port.mk>
