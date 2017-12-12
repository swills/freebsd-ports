# $FreeBSD: head/devel/rubygem-rake-compiler-dock/Makefile 455591 2017-12-05 16:44:09Z tz $

PORTNAME=	rake-compiler-dock
PORTVERSION=	0.6.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	idefix@fechner.net
COMMENT=	Cross compiler environment for building Windows binary gems

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
