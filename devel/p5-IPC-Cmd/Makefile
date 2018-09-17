# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: head/devel/p5-IPC-Cmd/Makefile 479727 2018-09-13 21:54:57Z sunpoet $

PORTNAME=	IPC-Cmd
PORTVERSION=	1.02
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BINGOS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Finding and running system commands made easy

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
