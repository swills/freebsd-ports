# Created by: Yuan-Chung Hsiao <ychsiao@ychsiao.org>
# $FreeBSD: head/devel/p5-SVN-Log/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	SVN-Log
PORTVERSION=	0.03
PORTREVISION=	6
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ychsiao@ychsiao.org
COMMENT=	SVN::Log - Extract change logs from a Subversion server

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-subversion>=0:devel/p5-subversion \
		p5-Test-Simple>=0:devel/p5-Test-Simple

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
