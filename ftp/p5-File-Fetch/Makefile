# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: head/ftp/p5-File-Fetch/Makefile 455469 2017-12-03 20:37:27Z sunpoet $

PORTNAME=	File-Fetch
PORTVERSION=	0.56
CATEGORIES=	ftp www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generic file fetching mechanism

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 502504
BUILD_DEPENDS+=	p5-Module-Load-Conditional>=0.66:devel/p5-Module-Load-Conditional
RUN_DEPENDS+=	p5-Module-Load-Conditional>=0.66:devel/p5-Module-Load-Conditional
.endif

.include <bsd.port.post.mk>
