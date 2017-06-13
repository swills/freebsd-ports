# Created by: Geraud CONTINSOUZAS <geraud@gcu.info>
# $FreeBSD: head/devel/p5-Log-Dispatch-Array/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Log-Dispatch-Array
PORTVERSION=	1.003
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	geraud@gcu.info
COMMENT=	Log events to an array (reference)

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Log-Dispatch>=0:devel/p5-Log-Dispatch
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Deep>=0:devel/p5-Test-Deep

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
