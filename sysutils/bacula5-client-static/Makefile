# $FreeBSD: head/sysutils/bacula5-client-static/Makefile 442913 2017-06-08 10:36:40Z mat $

PORTNAME=	bacula
PKGNAMESUFFIX=	5-client-static

COMMENT=	Network backup solution (static client)

CONFLICTS=	bacula-client-static-*

PLIST=		${.CURDIR}/pkg-plist
MASTERDIR=	${.CURDIR}/../../sysutils/bacula5-server

PLIST_FILES=	sbin/bacula-fd-static \
		sbin/bconsole-static

OPTIONS_DEFINE=	NLS OPENSSL
OPTIONS_DEFAULT=OPENSSL

CONFIGURE_ARGS+=	--enable-client-only \
			--enable-static-fd \
			--enable-static-cons \
			--disable-libtool \
			--disable-build-dird \
			--disable-build-stored

BROKEN_aarch64=		Fails to link: missing sbrk

BROKEN_SSL=	libressl

.include "${MASTERDIR}/Makefile"
