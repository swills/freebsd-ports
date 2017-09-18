# Created by: chinsan
# $FreeBSD: head/devel/p5-Hash-Util-FieldHash-Compat/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Hash-Util-FieldHash-Compat
PORTVERSION=	0.11
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Use Hash::Util::FieldHash or ties, depending on availability

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Module-Metadata>=0:devel/p5-Module-Metadata \
		p5-Tie-RefHash-Weak>=0.08:devel/p5-Tie-RefHash-Weak
RUN_DEPENDS=	p5-Tie-RefHash-Weak>=0.08:devel/p5-Tie-RefHash-Weak

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
