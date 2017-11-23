# $FreeBSD: head/devel/rubygem-rake-compiler-dock/Makefile 454304 2017-11-16 12:24:55Z tz $

PORTNAME=	rake-compiler-dock
PORTVERSION=	0.6.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	tz@FreeBSD.org
COMMENT=	Easy to use and reliable cross compiler environment

LICENSE=	MIT

BUILD_DEPENDS=	rubygem-bundler>=1.7:sysutils/rubygem-bundler \
		rubygem-rake>=12.0:devel/rubygem-rake \
		rubygem-test-unit>=3.0:devel/rubygem-test-unit \
		bash>=0:shells/bash

USES=		gem shebangfix
NO_ARCH=	yes
USE_RUBY=	yes

SHEBANK_LANG=	bash
SHEBANG_FILES=	build/runas

PLIST_FILES=	bin/rake-compiler-dock

.include <bsd.port.mk>
