# Created by: ijliao
# $FreeBSD: head/misc/latex-mk/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	latex-mk
PORTVERSION=	2.1
PORTREVISION=	4
CATEGORIES=	misc print
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Collection of makefile and scripts for LaTeX documents

LICENSE=	BSD4CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	texi2dvi:print/texinfo

USE_TEX=	latex
USES=		gmake
GNU_CONFIGURE=	yes

INFO=		latex-mk

.include <bsd.port.mk>
