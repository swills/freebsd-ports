# $FreeBSD$

PORTNAME=	vimgolf
PORTVERSION=	0.4.9
CATEGORIES=	games rubygems
MASTER_SITES=	RG

MAINTAINER=	dereks@lifeofadishwasher.com
COMMENT=	CLI client for vimgolf.com

LICENSE=	MIT

RUN_DEPENDS=	rubygem-highline>=2.0.3:devel/rubygem-highline \
		rubygem-json_pure>=2.3.1:devel/rubygem-json_pure \
		rubygem-thor>=1.0.1:devel/rubygem-thor

USES=		gem
USE_RUBY=	yes
NO_ARCH=	yes
PLIST_FILES=	bin/vimgolf

.include <bsd.port.mk>
