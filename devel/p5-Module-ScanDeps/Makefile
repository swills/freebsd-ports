# Created by: Autrijus Tang <autrijus@autrijus.org>
# $FreeBSD: head/devel/p5-Module-ScanDeps/Makefile 477516 2018-08-18 20:41:07Z sunpoet $

PORTNAME=	Module-ScanDeps
PORTVERSION=	1.25
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Recursively scan Perl code for dependencies

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	p5-Test-Requires>=0:devel/p5-Test-Requires

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
