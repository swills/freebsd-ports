# Created by: Tom McLaughlin <tmclaugh@sdf.lonestar.org>
# $FreeBSD: head/www/xsp/Makefile 460430 2018-01-30 19:00:27Z dbn $

PORTNAME=	xsp
PORTVERSION=	4.2
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	http://download.mono-project.com/sources/${PORTNAME}/

MAINTAINER=	mono@FreeBSD.org
COMMENT=	Mono based web server

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

MAKE_JOBS_UNSAFE=	yes

USES=		gmake libtool mono pathfix pkgconfig sqlite
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	ac_cv_path_GMCS=${LOCALBASE}/bin/mcs

PLIST_SUB+=	PORTVERSION=${PORTVERSION}

pre-install:
	${MKDIR} ${STAGEDIR}${XSP_DOCROOT}

.include <bsd.port.mk>
