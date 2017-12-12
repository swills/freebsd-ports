# Created by: Tobias Kortkamp <t@tobik.me>
# $FreeBSD: head/sysutils/xe/Makefile 455788 2017-12-08 17:46:53Z tobik $

PORTNAME=	xe
DISTVERSIONPREFIX=	v
DISTVERSION=	0.11
CATEGORIES=	sysutils

MAINTAINER=	tobik@FreeBSD.org
COMMENT=	Simple xargs and apply replacement

LICENSE=	CC0-1.0

USE_GITHUB=	yes
GH_ACCOUNT=	chneukirchen

USES=		perl5
USE_PERL5=	test

MAKE_ARGS=	CFLAGS="${CFLAGS}" \
		PREFIX="${PREFIX}" \
		MANDIR="${PREFIX}/man"
TEST_TARGET=	check

PLIST_FILES=	bin/xe \
		man/man1/xe.1.gz \
		share/zsh/site-functions/_xe

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/xe

.include <bsd.port.mk>
