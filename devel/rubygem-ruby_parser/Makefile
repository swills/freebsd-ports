# Created by: Espen Volden aka voldern <voldern@hoeggen.net>
# $FreeBSD: head/devel/rubygem-ruby_parser/Makefile 447607 2017-08-09 09:03:17Z tz $

PORTNAME=	ruby_parser
PORTVERSION=	3.8.4
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	voldern@hoeggen.net
COMMENT=	Ruby parser written in pure ruby

LICENSE=	MIT

RUN_DEPENDS=	rubygem-sexp_processor>=4.1:devel/rubygem-sexp_processor

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix
SHEBANG_FILES=	bin/ruby_parse*

PLIST_FILES=	bin/ruby_parse \
		bin/ruby_parse_extract_error

.include <bsd.port.mk>
