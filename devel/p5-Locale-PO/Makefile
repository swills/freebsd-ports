# $FreeBSD: head/devel/p5-Locale-PO/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Locale-PO
PORTVERSION=	0.27
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tabthorpe@FreeBSD.org
COMMENT=	Perl module for manipulating .po entries from GNU gettext

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-File-Slurp>=0:devel/p5-File-Slurp

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ENV+=	LOCALBASE=${LOCALBASE}
NO_ARCH=	yes

.include <bsd.port.mk>
