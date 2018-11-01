# Created by: Autrijus Tang <autrijus@autrijus.org>
# $FreeBSD: head/security/subversion-gnome-keyring/Makefile 483685 2018-11-01 16:12:44Z lev $

PKGNAMESUFFIX=	-gnome-keyring
CATEGORIES=	security gnome

MAINTAINER=	lev@FreeBSD.org
COMMENT=	Gnome Keyring integration for Version control system

PORTREVISION_111=	0
PORTREVISION_19=	0

.include "${.CURDIR}/../../devel/subversion/Makefile.addons"

.if ${WITH_SUBVERSION_VER} == 19
LIB_DEPENDS+=	libgnome-keyring.so:security/libgnome-keyring
.else
LIB_DEPENDS+=	libsecret-1.so:security/libsecret
.endif

CONFIGURE_ARGS+=	--with-gnome-keyring

ALL_TARGET=	gnome-keyring-lib
INSTALL_TARGET=	install-gnome-keyring-lib

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/*.so

.include <bsd.port.post.mk>
