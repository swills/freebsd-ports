# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: head/devel/p5-Lexical-Persistence/Makefile 480723 2018-09-26 09:08:30Z amdmi3 $

PORTNAME=	Lexical-Persistence
PORTVERSION=	1.023
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	jadawin@FreeBSD.org
COMMENT=	Persistent lexical variable values for arbitrary calls

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Devel-LexAlias>=0.04:devel/p5-Devel-LexAlias \
		p5-PadWalker>=1.1:devel/p5-PadWalker
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
