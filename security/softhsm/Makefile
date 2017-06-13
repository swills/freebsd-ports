# Created by: Jaap Akkerhuis <jaap@NLnetLabs.nl>
# $FreeBSD: head/security/softhsm/Makefile 427531 2016-12-01 23:25:17Z jhale $

PORTNAME=	softhsm
PORTVERSION=	1.3.8
CATEGORIES=	security
MASTER_SITES=	http://dist.opendnssec.org/source/

MAINTAINER=	jaap@NLnetLabs.nl
COMMENT=	Software implementation of a Hardware Security Module (HSM)

LICENSE=	BSD2CLAUSE

LIB_DEPENDS=	libbotan-1.10.so:security/botan110 \
		libsqlite3.so:databases/sqlite3

GNU_CONFIGURE=	yes
# !!!!!!!!!!!!
# Changing the localstatedir is a huge POLA violation. Please leave it alone.
# !!!!!!!!!!!!!!
CONFIGURE_ARGS=	--with-botan=${LOCALBASE} --with-sqlite3=${LOCALBASE} \
		--localstatedir=/var
INSTALL_TARGET=	install-strip
USES=		libtool ssl
USE_LDCONFIG=	yes

CONFLICTS=	softhsm2-[0-9]*

.include <bsd.port.mk>
