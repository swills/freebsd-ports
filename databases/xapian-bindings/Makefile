# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/databases/xapian-bindings/Makefile 439297 2017-04-24 15:14:52Z sunpoet $

PORTNAME=	xapian-bindings
PORTVERSION=	1.4.4
CATEGORIES=	databases

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Bindings allowing Xapian to be used from various programming languages

LICENSE=	GPLv2

OPTIONS_DEFINE=	LUA PERL PHP PYTHON RUBY
OPTIONS_DEFAULT=LUA PERL PHP PYTHON RUBY

PORTSCOUT=	limitw:1,even

USES=		metaport

LUA_RUN_DEPENDS=	${LUA_PKGNAMEPREFIX}xapian>=${PORTVERSION}:databases/lua-xapian
LUA_USES=		lua:run
PERL_RUN_DEPENDS=	p5-Xapian>=${PORTVERSION}:databases/p5-Xapian
PHP_RUN_DEPENDS=	php-xapian>=${PORTVERSION}:databases/php-xapian
PYTHON_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}xapian>=${PORTVERSION}:databases/py-xapian
PYTHON_USES=		python:run
RUBY_RUN_DEPENDS=	${RUBY_PKGNAMEPREFIX}xapian>=${PORTVERSION}:databases/ruby-xapian
RUBY_USE=		RUBY=yes
RUBY_VARS=		RUBY_NO_BUILD_DEPENDS=yes

.include <bsd.port.mk>
