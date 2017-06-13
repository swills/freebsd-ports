# Created by: Philip Paeps <philip@paeps.cx>
# $FreeBSD: head/devel/p5-Date-Roman/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Date-Roman
PORTVERSION=	1.06
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	philip@FreeBSD.org
COMMENT=	Perl module to play with Roman dates

BUILD_DEPENDS=	p5-Roman>=0:math/p5-Roman
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
