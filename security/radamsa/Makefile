# Created by: Jukka Ukkonen <jau@iki.fi>
# $FreeBSD: head/security/radamsa/Makefile 454079 2017-11-12 20:40:44Z rene $

PORTNAME=	radamsa
PORTVERSION=	0.5
DISTVERSIONPREFIX=	v
CATEGORIES=	security

MAINTAINER=	jau@iki.fi
COMMENT=	General purpose fuzzer

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENCE

USE_GITHUB=	yes
GH_ACCOUNT=	aoh

BUILD_DEPENDS=	ol:lang/owl-lisp

PLIST_FILES=	bin/radamsa \
		man/man1/radamsa.1.gz

.include <bsd.port.mk>
