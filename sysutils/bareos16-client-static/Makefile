# $FreeBSD: head/sysutils/bareos16-client-static/Makefile 470319 2018-05-18 19:00:37Z acm $

PORTNAME=	bareos16
PORTREVISION=	1
PKGNAMESUFFIX=	-client-static

COMMENT=	Backup archiving recovery open sourced (static client)

CONFLICTS=	bareos-client-static-*

PLIST=		${.CURDIR}/pkg-plist
MASTERDIR=	${.CURDIR}/../../sysutils/bareos16-server

PLIST_FILES=	sbin/bareos-fd-static \
		sbin/bconsole-static

OPTIONS_DEFINE=	NLS LMDB
LMDB_DESC=	Enable build of LMDB support

CONFIGURE_ARGS+=	--enable-client-only \
			--enable-static-fd \
			--enable-static-cons \
			--disable-libtool \
			--disable-build-dird \
			--disable-build-stored \
			--with-jansson=${LOCALBASE}

BROKEN_aarch64=	Fails to link: missing sbrk

.include "${MASTERDIR}/Makefile"
