# Created by: Aaron Dalton <aaron@daltons.ca>
# $FreeBSD: head/devel/p5-Tree-Simple-VisitorFactory/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Tree-Simple-VisitorFactory
PORTVERSION=	0.15
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Set of visitor objects for traversing Tree::Simple hierarchies

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Tree-Simple>=1.22:devel/p5-Tree-Simple
TEST_DEPENDS=	p5-Test-Exception>=0.15:devel/p5-Test-Exception

NO_ARCH=	yes
USES=		perl5 tar:tgz
USE_PERL5=	configure

.include <bsd.port.mk>
