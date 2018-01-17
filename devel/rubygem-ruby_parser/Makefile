# Created by: Espen Volden aka voldern <voldern@hoeggen.net>
# $FreeBSD: head/devel/rubygem-ruby_parser/Makefile 458908 2018-01-13 08:13:45Z sunpoet $

PORTNAME=	ruby_parser
PORTVERSION=	3.10.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	voldern@hoeggen.net
COMMENT=	Ruby parser written in pure ruby

LICENSE=	MIT

RUN_DEPENDS=	rubygem-sexp_processor>=4.9:devel/rubygem-sexp_processor

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix

PLIST_FILES=	bin/ruby_parse \
		bin/ruby_parse_extract_error

SHEBANG_FILES=	bin/* \
		compare/normalize.rb

.include <bsd.port.mk>
