# Created by: ache
# $FreeBSD: head/devel/patch/Makefile 421635 2016-09-09 19:42:46Z amdmi3 $

PORTNAME=	patch
PORTVERSION=	2.7.5
CATEGORIES=	devel
MASTER_SITES=	GNU

MAINTAINER=	johans@FreeBSD.org
COMMENT=	GNU patch utility

LICENSE=	GPLv3

USES=		cpe charsetfix gmake tar:xz
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--program-prefix=g
CPE_VENDOR=	gnu

PLIST_FILES=	bin/gpatch man/man1/gpatch.1.gz

.include <bsd.port.mk>
