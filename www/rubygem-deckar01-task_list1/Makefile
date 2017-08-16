# $FreeBSD: head/www/rubygem-deckar01-task_list1/Makefile 441347 2017-05-20 21:50:46Z sunpoet $

PORTNAME=	deckar01-task_list
PORTVERSION=	1.0.6
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	1

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Markdown TaskList components

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

DEPRECATED=	Only created for www/gitlab; please switch to www/rubygem-deckar01-task_list
EXPIRATION_DATE=	2017-10-31

RUN_DEPENDS=	rubygem-activesupport4>=4.0:devel/rubygem-activesupport4 \
		rubygem-html-pipeline1>=0:textproc/rubygem-html-pipeline1 \
		rubygem-rack16>=1.0:www/rubygem-rack16

PORTSCOUT=	limit:^1\.

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
