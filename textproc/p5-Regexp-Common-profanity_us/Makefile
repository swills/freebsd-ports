# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/textproc/p5-Regexp-Common-profanity_us/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Regexp-Common-profanity_us
PORTVERSION=	4.112150
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Provide regexes for U.S. profanity

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Regexp-Common>=0:textproc/p5-Regexp-Common
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
