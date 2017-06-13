# Created by: William Grzybowski <wg@FreeBSD.org>
# $FreeBSD: head/databases/pear-DoctrineCommon/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	DoctrineCommon
PORTVERSION=	2.3.0
CATEGORIES=	databases pear
MASTER_SITES=	http://pear.doctrine-project.org/get/

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Shared code for Doctrine PHP object relational mapper

LICENSE=	LGPL21

BUILD_DEPENDS=	${PEARDIR}/.channels/pear.doctrine-project.org.reg:devel/pear-channel-doctrine
RUN_DEPENDS=	${PEARDIR}/.channels/pear.doctrine-project.org.reg:devel/pear-channel-doctrine

USES=	pear
PEAR_CHANNEL=	doctrine

.include <bsd.port.mk>
