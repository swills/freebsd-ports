# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: head/editors/jupp/Makefile 487357 2018-12-13 08:45:40Z gblach $

PORTNAME=	jupp
PORTVERSION=	3.1.38
CATEGORIES=	editors
MASTER_SITES=	http://www.mirbsd.org/MirOS/dist/jupp/ \
		http://pub.allbsd.org/MirOS/dist/jupp/
DISTNAME=	joe-${PORTVERSION:C/([0-9]+\.[0-9]+)\.([0-9]+)/\1${PORTNAME}\2/}

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Portable version of Joe's Own Editor from MirBSD

LICENSE=	GPLv1

CONFLICTS=	joe-[24]*

USES=		tar:tgz
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-termidx
WRKSRC=		${WRKDIR}/${PORTNAME}

pre-configure:
	@${CHMOD} +x ${WRKSRC}/configure

.include <bsd.port.mk>
