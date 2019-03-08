# $FreeBSD: head/security/yapet/Makefile 494983 2019-03-07 18:45:57Z swills $

PORTNAME=	yapet
DISTVERSION=	2.3
CATEGORIES=	security
MASTER_SITES=	https://yapet.guengel.ch/downloads/

MAINTAINER=	rafi@guengel.ch
COMMENT=	Curses based password manager

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gmake ncurses ssl pkgconfig compiler:c++14-lang
LIB_DEPENDS+=	libargon2.so:security/libargon2 \
		libcppunit.so:devel/cppunit

GNU_CONFIGURE=	yes

OPTIONS_DEFINE=		DOCS NLS
OPTIONS_SUB=		yes

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

TEST_TARGET=	check

.include <bsd.port.mk>
