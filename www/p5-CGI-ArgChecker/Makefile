# Created by: will
# $FreeBSD: head/www/p5-CGI-ArgChecker/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	CGI-ArgChecker
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module implementing a cgi interface to String::Checker

BUILD_DEPENDS=	p5-String-Checker>=0:devel/p5-String-Checker
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
