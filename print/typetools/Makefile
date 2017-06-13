# Created by: ijliao
# $FreeBSD: head/print/typetools/Makefile 419101 2016-07-26 07:50:00Z bofh $

PORTNAME=	typetools
PORTVERSION=	2.106
CATEGORIES=	print
MASTER_SITES=	http://www.lcdf.org/type/
DISTNAME=	lcdf-${PORTNAME}-${PORTVERSION}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Tools for manipulating fonts

LICENSE=	GPLv2

USE_TEX=	kpathsea
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-kpathsea=${LOCALBASE}

DATADIR=	${PREFIX}/share/lcdf-${PORTNAME}

CONFLICTS_INSTALL=	texlive-base-[0-9]*

.include <bsd.port.mk>
