# Created by: Joseph Koshy <jkoshy@FreeBSD.org>
# $FreeBSD: head/www/wsmake/Makefile 405891 2016-01-12 16:20:31Z amdmi3 $

PORTNAME=	wsmake
PORTVERSION=	0.7.901
CATEGORIES=	www
MASTER_SITES=	SF/${PORTNAME}/OldFiles

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Software for production and maintenance of web sites

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gmake tar:bzip2
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-gwsmake=no --enable-iswmake=no

INFO=		wsmake iwsmake gwsmake

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
