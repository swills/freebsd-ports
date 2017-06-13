# Created by: fluffy
# $FreeBSD: head/mail/opensmtpd-extras-filter-lua/Makefile 434427 2017-02-20 02:57:04Z jbeich $

PKGNAMESUFFIX=		-filter-lua
PORTREVISION=		2

COMMENT=		LUA-script filter support for OpenSMTPD

PLIST_FILES=		libexec/opensmtpd/filter-lua

CONFIGURE_ARGS+=	--with-experimental-filter-lua --with-lua-type=lua-${LUA_VER}

USES=			lua pkgconfig

MASTERDIR=		${.CURDIR}/../opensmtpd-extras
SLAVE_PORT=		yes

.include "${MASTERDIR}/Makefile"
