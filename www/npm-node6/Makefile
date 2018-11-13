# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/npm-node6/Makefile 483918 2018-11-03 22:16:33Z sunpoet $

PKGNAMESUFFIX=	-node6

CONFLICTS_INSTALL=	npm npm-node10 npm-node8

OPTIONS_EXCLUDE=NODE NODE10 NODE8
OPTIONS_SLAVE=	NODE6

MASTERDIR=	${.CURDIR}/../npm

.include "${MASTERDIR}/Makefile"
