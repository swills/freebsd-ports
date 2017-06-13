# Created by: Lars Thegler <lars@thegler.dk>
# $FreeBSD: head/databases/p5-Class-DBI-AsForm/Makefile 437950 2017-04-07 18:50:22Z lth $

PORTNAME=	Class-DBI-AsForm
PORTVERSION=	2.42
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Produce HTML form elements for database columns

BUILD_DEPENDS=	p5-Class-DBI>=0:databases/p5-Class-DBI \
		p5-HTML-Tree>=0:www/p5-HTML-Tree \
		p5-Class-DBI-Plugin-Type>=0:databases/p5-Class-DBI-Plugin-Type
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
