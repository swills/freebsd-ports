# $FreeBSD$

PORTNAME=	rake-compiler-dock
PORTVERSION=	0.6.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	tz@FreeBSD.org
COMMENT=	Easy to use and reliable cross compiler environment for building Windows binary gems

LICENSE=	MIT

BUILD_DEPENDS=	rubygem-bundler>=1.7:sysutils/rubygem-bundler \
		rubygem-rake>=12.0:devel/rubygem-rake \
		rubygem-test-unit>=3.0:devel/rubygem-test-unit \
		bash>=0:shells/bash

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix

SHEBANK_LANG=	bash
SHEBANG_FILES=	build/runas

PLIST_FILES=	bin/rake-compiler-dock

.include <bsd.port.mk>
