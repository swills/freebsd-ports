# Created by: Tom McLaughlin <tmclaugh@sdf.lonestar.org>
# $FreeBSD: head/mail/gmime2-sharp/Makefile 428132 2016-12-08 16:07:33Z tijl $

PORTREVISION=	4
CATEGORIES=	mail
PKGNAMESUFFIX=	2-sharp

MAINTAINER=	mono@FreeBSD.org
COMMENT=	Mono bindings for gmime

IGNORE=		try to install weaked-named assembly into the GAC

LIB_DEPENDS=	libgmime-2.0.so:mail/gmime2

MASTERDIR=	${.CURDIR}/../gmime2
BUILD_WRKSRC=	${WRKSRC}/mono
INSTALL_WRKSRC=	${BUILD_WRKSRC}
DESCR=		${.CURDIR}/pkg-descr
PLIST=		${.CURDIR}/pkg-plist

USES=		mono
USE_GNOME=	glib20 gtksharp20
CONFIGURE_ARGS=	--enable-mono=yes

# Else we conflict with mail/gmime2
OPTIONS_EXCLUDE=DOCS

# Done in pre-configure because master port has a post-patch target already.
pre-configure:
	@${REINPLACE_CMD} -e 's|.@GMIME_VERSION@||g' \
		${WRKSRC}/mono/gmime-sharp.dll.config.in

.include "${MASTERDIR}/Makefile"
