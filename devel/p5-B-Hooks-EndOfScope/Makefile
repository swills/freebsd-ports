# Created by: Lars Balker Rasmussen <lbr@FreeBSD.org>
# $FreeBSD: head/devel/p5-B-Hooks-EndOfScope/Makefile 417217 2016-06-21 15:06:34Z mat $

PORTNAME=	B-Hooks-EndOfScope
PORTVERSION=	0.21
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Execute code after a scope finished compilation

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Module-Implementation>=0.05:devel/p5-Module-Implementation \
		p5-Sub-Exporter-Progressive>=0.001006:devel/p5-Sub-Exporter-Progressive \
		p5-Variable-Magic>=0.48:devel/p5-Variable-Magic
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
