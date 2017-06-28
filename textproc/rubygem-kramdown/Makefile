# Created by: Steve Wills <swills@rubick>
# $FreeBSD: head/textproc/rubygem-kramdown/Makefile 444498 2017-06-27 16:15:21Z sunpoet $

PORTNAME=	kramdown
PORTVERSION=	1.14.0
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Yet-another-markdown-parser but fast, pure Ruby

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix

PLIST_FILES=	bin/kramdown

SHEBANG_FILES=	benchmark/*.sh

.include <bsd.port.mk>
