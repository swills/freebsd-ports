# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/security/R-cran-openssl/Makefile 485377 2018-11-20 02:09:47Z tota $

PORTNAME=	openssl
PORTVERSION=	1.1
CATEGORIES=	security
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Toolkit for Encryption, Signatures and Certificates Based on OpenSSL

LICENSE=	MIT

TEST_DEPENDS=	bash:shells/bash

USES=		cran:auto-plist,compiles shebangfix ssl

SHEBANG_FILES=	${WRKSRC}/tests/google.dk/generate.bash

.include <bsd.port.mk>
