# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/p5-Term-Table/Makefile 486694 2018-12-05 18:47:17Z sunpoet $

PORTNAME=	Term-Table
PORTVERSION=	0.013
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Format a header and rows into a table

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Importer>=0.024:devel/p5-Importer
TEST_DEPENDS=	p5-Test-Simple>=1.302097:devel/p5-Test-Simple

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
