# $FreeBSD: head/sysutils/bacula-client-static/Makefile 484470 2018-11-08 19:16:26Z dvl $

PORTNAME=	bacula
PKGNAMESUFFIX=	-client-static

COMMENT=	Network backup solution (static client)

DEPRECATED=	Unsupported. Please migrate to bacula9-client-static
EXPIRATION_DATE=	2019-03-01

PLIST=		${.CURDIR}/pkg-plist
MASTERDIR=	${.CURDIR}/../../sysutils/bacula-server

PLIST_FILES=	sbin/bacula-fd-static \
		sbin/bconsole-static

OPTIONS_DEFINE=	NLS
OPTIONS_DEFAULT=#

CONFIGURE_ARGS+=	--enable-client-only \
			--enable-static-fd \
			--enable-static-cons \
			--disable-libtool \
			--disable-build-dird \
			--disable-build-stored

BROKEN_aarch64=		Fails to link: missing sbrk

.include "${MASTERDIR}/Makefile"
