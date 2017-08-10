# Created by: Frederic Culot <culot@FreeBSD.org>
# $FreeBSD: head/devel/p5-Term-RawInput/Makefile 447175 2017-08-02 19:29:57Z culot $

PORTNAME=	Term-RawInput
PORTVERSION=	1.23
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:REEDFISH
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Drop-in replacement for <STDIN> with handling of non-standard keys

LICENSE=	GPLv2

BUILD_DEPENDS=	p5-Term-ReadKey>=0:devel/p5-Term-ReadKey
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
