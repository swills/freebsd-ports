# Created by: Geraud CONTINSOUZAS <geraud@gcu.info>
# $FreeBSD: head/devel/p5-Log-Dispatch-Array/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Log-Dispatch-Array
PORTVERSION=	1.003
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	geraud@gcu.info
COMMENT=	Log events to an array (reference)

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Log-Dispatch>=0:devel/p5-Log-Dispatch
TEST_DEPENDS=	p5-Test-Deep>=0:devel/p5-Test-Deep

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
