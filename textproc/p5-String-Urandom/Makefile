# $FreeBSD: head/textproc/p5-String-Urandom/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	String-Urandom
PORTVERSION=	0.16
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to convert /dev/urandom to 8-bit chars

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	\
	p5-Params-Validate>0:devel/p5-Params-Validate
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
