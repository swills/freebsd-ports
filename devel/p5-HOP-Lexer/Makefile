# Created by: Steve Wills <steve@mouf.net>
# $FreeBSD: head/devel/p5-HOP-Lexer/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	HOP-Lexer
PORTVERSION=	0.032
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:OVID
PKGNAMEPREFIX=	p5-

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Higher Order Perl Lexer

BUILD_DEPENDS=	p5-HOP-Stream>=0.01:devel/p5-HOP-Stream
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
